# Social-Distance-Violation-Alert
   During the period of pandemic, it is very crucial to follow the instructions given by oﬃcial authorities. One major step during this period is the Social Distancing. It becomes very diﬃcult for the authorities to keep detailed check on whether social distancing is being followed or not. We come across situations where instead of patiently following these rules, people panic and tend to crowd up places. So, for easy monitoring for the authorities (like police oﬃcials) we propose to you a digital solution using Machine learning technique which would alert them as soon as the violation of the social distancing is detected that is number of people more than the threshold (limit on the number of people allowed to be in a place, set by the government) or distance between two people is less than the threshold distance. A video stream will be captured from the CCTV camera, with the help of YOLO and CV model we are detecting the humans and keeping a track of the number of humans present in the given live video stream, if the number of humans crosses the minimum threshold limit (set by the offcials) or if the Euclidean distance between any two poses detected in the frame we alert the authorities in-charged. This application will not only be helpful to reduce the eﬀorts and strength required to manually check the places around, but also to save time and quick analysis as in layman’s term the CCTV cameras will help simultaneously monitor each and every place of common gathering.

## Clone:
    Clone the full code in a file on your pc. 
    Github usually doesn't support files larger than 25 Mb.
    You can find the yolo weights in [My google drive](https://drive.google.com/file/d/1QrGGrZl-K2z9IH410o9oeGvbKdIDjGIS/view?usp=sharing) 
    Download yolo3.weights file and move it to yolo-coco folder

## For CPU: 
    To run this code in your terminal:
    1.Hardware reqirements
      Arduino
      Led
      Buzzer
      Jumper wires
      2.Software reqirements
	Arduino ide
	idle
	ip web cam 
    3.Connections
        1.connect green Led to pin 13 of board
        2.connect red Led and Buzzer to pin 7 of board
    4.Setting up arduino
	   open social.ino in arduino application 
	   Compile the sketch
	   upload it to the board(cntrl U)
    5.Command line
	   go to the social folder by eg(cd desktop\social\)
	   run: 'pip install -r requirements.txt'
    6. Running the hack
	   Run code on cmd:  'python social_distance_detector.py --input pedestrians.mp4 --output output.avi --display 1'
    7. Also the frame will be saved in output.avi	

## Model:
![h]

## Youtube:
[Youtube Link](https://youtu.be/Fd-FuLAufm8)
