import cv2
from cv2 import aruco
# import mediapipe as mp

marker_dict = aruco.Dictionary_get(aruco.DICT_4X4_50)
param_markers = aruco.DetectorParameters_create()
cam = cv2.VideoCapture(0)

while (cv2.waitKey(1) != ord('q')):
    ret,frame = cam.read()
    gray_frame = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    marker_corners,marker_ID,reject = aruco.detectMarkers(gray_frame,marker_dict,parameters =param_markers )
    print(marker_ID)
    cv2.imshow("Current",frame)

cam.release()
cv2.destroyAllWindows()