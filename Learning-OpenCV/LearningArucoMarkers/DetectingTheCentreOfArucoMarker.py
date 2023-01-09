import cv2
from cv2 import aruco
import numpy as np

marker_dict = aruco.Dictionary_get(aruco.DICT_4X4_50)

param_markers = aruco.DetectorParameters_create()
cam = cv2.VideoCapture(0)

while (cv2.waitKey(1) != ord('q')):
    
    ret,frame = cam.read()
    if not ret:
        break
    gray_frame = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    marker_corners,marker_ID,reject = aruco.detectMarkers(gray_frame,marker_dict,parameters =param_markers )
    if marker_corners:
        for ids,corners in zip(marker_ID,marker_corners):
            # cv2.polylines(frame,[corners.astype(np.int32)],True,(0,255,255),4,cv2.LINE_4)
            # print(ids,corners)
            centre = (corners[0][0] + corners[0][2])/2
            centre = tuple(map(int,centre))
            print(centre)
            cv2.circle(frame, centre, 10, (0,255,255),-1)
            
        
    cv2.imshow("Current: ",frame)
    # time.sleep(.5)
    

cam.release()
cv2.destroyAllWindows()