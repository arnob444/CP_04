import cv2 #image handeling 
import numpy as np #for array
import face_recognition #main, face detection and recognition
import os #system er file read
from datetime import datetime #for current time and date
# from PIL import ImageGrab
#cmake, dlib, face_recognition, numpy, opencv
 
path = 'ImagesAttendance' #dataset folder access
images = []  #empty list for images
classNames = [] #empty list for names
myList = os.listdir(path) #path folder er sob file  (image) eksathe read korbe 
print(myList) #print korbe sob image er naam

for cl in myList:
    curImg = cv2.imread(f'{path}/{cl}') #ekta ekta kore image detect korbe database theke
    images.append(curImg) #image list er moddhe ekta ekta kore image add korbe e.g "rejowan.jpg"
    classNames.append(os.path.splitext(cl)[0]) #sudhu naam gula list kortese e.g "rejowan"
print(classNames) 
 
def findEncodings(images):
    encodeList = [] #empty list nissi 
    for img in images: #ekta ekta kore image access korbe
        img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB) #sob image re rgb te covert kortese for algortithm demand
        encode = face_recognition.face_encodings(img)[0] #ekta ekta kore image encode korbe
        encodeList.append(encode) #sobgula encoding eksathe list ee rakhbo
    return encodeList
 
def markAttendance(name):
    with open('Attendance.csv','r+') as f: #attendance er csv file read write korar jonno
        myDataList = f.readlines() #csv file read korar jonno declare korchi
        nameList = []
        for line in myDataList:
            entry = line.split(',') 
            nameList.append(entry[0]) #amar csv te joto name currently ache oigula nameList ee append korbo
        if name not in nameList:
            now = datetime.now() #current time and date
            dtString = now.strftime('%H:%M:%S') #current time ta string hishebe dtString save hobe
            f.writelines(f'n{name},{dtString}') #name and current time entry korbo csv file ee
 
#### FOR CAPTURING SCREEN RATHER THAN WEBCAM
def captureScreen(bbox=(300,300,690+300,530+300)): #sceen capture kortese ekta resulation ee
    capScr = np.array(ImageGrab.grab(bbox)) #sceen er image re array hishebe represent kore
    capScr = cv2.cvtColor(capScr, cv2.COLOR_RGB2BGR) #rgb te convert kore
    return capScr
 
encodeListKnown = findEncodings(images) #database er sob imager er encoding save kortesi
print('Encoding Complete')
 
cap = cv2.VideoCapture(0) #webcam chalanor jonno
 
while True:
    success, img = cap.read() #webcam chalaile
    #img = captureScreen()
    imgS = cv2.resize(img,(0,0),None,0.25,0.25) #sceen er size 25% komay, speed baranor jonno
    imgS = cv2.cvtColor(imgS, cv2.COLOR_BGR2RGB) #rgb te convert kortesi
 
    facesCurFrame = face_recognition.face_locations(imgS) #frame e face er location ber kore
    encodesCurFrame = face_recognition.face_encodings(imgS,facesCurFrame) #frame e current face  er encoding kore
 
    for encodeFace,faceLoc in zip(encodesCurFrame,facesCurFrame): #location and encoding duita variable diye access kortesi
        matches = face_recognition.compare_faces(encodeListKnown,encodeFace) #known face gula theke current compare korbe
        faceDis = face_recognition.face_distance(encodeListKnown,encodeFace) #amar joto gula known face ache sob gula sathe encoding ta milabe
        #print(faceDis)
        matchIndex = np.argmin(faceDis) #sob cheye minimum distance re match dhorbe
 
        if matches[matchIndex]: #jodi match kore
            name = classNames[matchIndex].upper() #name re upper case ee nissi compare korar jonno
            #print(name)
            y1,x2,y2,x1 = faceLoc #frame er face re coordinate gula ber kortesi
            y1, x2, y2, x1 = y1*4,x2*4,y2*4,x1*4 #age je 25% korsilm oita re 100% korbo aabr
            cv2.rectangle(img,(x1,y1),(x2,y2),(0,255,0),2) #faka ekta box face detect korse dekhabo
            cv2.rectangle(img,(x1,y2-35),(x2,y2),(0,255,0),cv2.FILLED) #name er jonno filled box
            cv2.putText(img,name,(x1+6,y2-6),cv2.FONT_HERSHEY_COMPLEX,1,(255,255,255),2) #name ta print korbe
            markAttendance(name) #name update korbo csv file ee
 
    cv2.imshow('Webcam',img)  #frame ta webcam naam ee show korbe
    cv2.waitKey(1) #frame er refresh rate/ koto kkhon por kaj korbe - 1mS