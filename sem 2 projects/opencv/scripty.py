import cv2

detect = cv2.CascadeClassifier("haarcascade_frontalface_default.xml")
imp_img = cv2.VideoCapture("elon-musk.jpg")

res, img = imp_img.read()

