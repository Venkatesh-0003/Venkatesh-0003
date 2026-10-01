import cv2
import os
import datetime
import time

# Create folder if not exists
if not os.path.exists("intruders"):
    os.makedirs("intruders")

# Load Haar Cascade
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
cap = cv2.VideoCapture(0)

print("Day 5 Started - Single Photo Mode")

last_saved_time = 0
cooldown = 5  # 5 seconds gap

while True:
    ret, frame = cap.read()
    if not ret:
        break

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    faces = face_cascade.detectMultiScale(gray, 1.3, 5)

    for (x, y, w, h) in faces:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 0, 255), 2)
        cv2.putText(frame, "INTRUDER DETECTED", (x, y-10), 
                    cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 0, 255), 2)

        # Save only once with 5 sec cooldown
        current_time = time.time()
        if current_time - last_saved_time > cooldown:
            time_now = datetime.datetime.now().strftime("%Y-%m-%d_%H-%M-%S")
            filename = f"intruders/intruder_{time_now}.jpg"
            
            # Save only cropped face
            face_only = frame[y:y+h, x:x+w]
            cv2.imwrite(filename, face_only)
            
            print(f"Saved One Face: {filename}")
            last_saved_time = current_time

    cv2.imshow("Day 5 - Single Save", frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
