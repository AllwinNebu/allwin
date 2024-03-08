import cv2
import time
import datetime

cap= cv2.VideoCapture(0) #no of device
face_cascade= cv2.CascadeClassifier(cv2.data.haarcasecades + "haarcasecades_frontal_default.xml")
body_cascade= cv2.CascadeClassifier(cv2.data.haarcasecades + "haarcasecades_fullbody.xml")
while True:
    _, frame=cap.read()

    cv2.imshow("CCTV",frame)

    if cv2.waitKey(1)==ord('\x1b'): # esc key
        break

cap.release()
cv2.destroyAllWindows()