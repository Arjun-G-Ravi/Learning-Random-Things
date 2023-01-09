import cv2

cam = cv2.VideoCapture(0)

while (cv2.waitKey(1) != ord('q')):
    ret,frame = cam.read()
    
    cv2.imshow("Current",frame)

cam.release()
cv2.destroyAllWindows()