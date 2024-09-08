import cv2

img = cv2.imread("Resources/cat.jpg")

imggray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)



cv2.imshow("Output",img)


cv2.imshow("Gray Image",imggray)

cv2.waitKey(0)