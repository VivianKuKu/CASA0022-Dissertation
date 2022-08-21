## CASA0022 - MSc CE Dissertation
# Augmented Sensor: A location-based Augmented Reality app for monitoring outdoor IoT networks

This paper demonstrates the ability to build a location-based Augmented Reality mobile application for assisting IoT professionals to conduct daily inspections on outdoor sensors. The primary object of this study is to establish the prototype and test the usability to understand how well a location-based AR mobile application can help track outdoor IoT sensors’ contextual information. 

🎨 Find the iOS application installation on [Unity_ios_app](https://github.com/VivianKuKu/CASA0022-Dissertation_Augmented-Sensor/tree/main/Unity_ios_app) (Please follow the **How to install the App** part)

🚀 Download the design of user interfaces built by Figma  on [User Interface](https://github.com/VivianKuKu/CASA0022-Dissertation_Augmented-Sensor/tree/main/User%20Interface)

🦆 Check the demo video on [Youtube link](https://github.com/VivianKuKu/CASA0015_Mobile-System_QEOP-IoT/blob/main/Final%20Presentation_QEOP%20IoT.pdf)

🚗 Find the User Testing Instructions and User Testing Survey on [User Testing](https://github.com/VivianKuKu/CASA0022-Dissertation_Augmented-Sensor/tree/main/User%20Testing)


## Features

- Welcome interface
- Register and login
  - Creating an account for use
-	User instruction
	- Showing the functionalities of each button
-	Map view
    -	Displaying the locations of sensors and user
-	AR notification
    -	Notifying users are near a sensor and able to start the AR experience
-	AR with digital representation
     -	3D digital representation of sensors  
-	Sensor data dashboard
    -	Showing real-time sensor data
-	Sensor status dashboard
    -	Showing live sensor status
-	Information dashboard
    -	Showing project and sensor information
-	Screenshot
     -	Saving screenshot to Firebase and local file system.
-	Adding a new sensor to the database
     -	Saving new information to Firebase


## User Flow
<img width="700" alt="image" src="https://user-images.githubusercontent.com/52306317/185813479-d5146f54-139e-4e2a-ac02-acb4a8b6725d.png">

## User Interfaces
<img width="700" alt="image" src="https://user-images.githubusercontent.com/52306317/185813493-2754fa30-b754-4977-b5fc-dca18d1876ad.png">
User interfaces of Welcome page (left), Register page (middle), and Log in page (right)

<img width="700" alt="image" src="https://user-images.githubusercontent.com/52306317/185813513-7473a370-7b81-4d02-a5c5-ceb891b6424b.png">
User interfaces of User instruction (left), Main page (middle), Map view (right)

<img width="700" alt="image" src="https://user-images.githubusercontent.com/52306317/185813528-0f04b2d9-3256-46a9-8989-0167af86ed45.png">
User interfaces of AR notification (left), Sensor data dashboard (middle), Sensor status dashboard (right)

<img width="700" alt="image" src="https://user-images.githubusercontent.com/52306317/185813539-a30c6efa-55f5-4b3b-b562-c61ad7eb6678.png">
User interfaces of Project information (left), Screenshot (middle), Adding new sensor (right)

## System Architecture

**Authentication**

<img width="600" alt="image" src="https://user-images.githubusercontent.com/52306317/185813560-0d88242b-9da2-486c-b058-23f0e3de016a.png">

**Map**

<img width="600" alt="image" src="https://user-images.githubusercontent.com/52306317/185813594-f85dc803-6b82-402a-8b23-9fdac0bf50b1.png">

**AR and Digital Representation**

<img width="600" alt="image" src="https://user-images.githubusercontent.com/52306317/185813610-25459382-d30f-495f-9caf-72323c823306.png">

**Sensor data dashboard / Sensor status dashboard**

<img width="600" alt="image" src="https://user-images.githubusercontent.com/52306317/185813624-7b6c382a-a357-4762-8a35-e3b78c6de32b.png">

**Project and Sensor Information Dashboard**

<img width="600" alt="image" src="https://user-images.githubusercontent.com/52306317/185813646-f75d3afa-fab6-4499-8c0c-bd4d490addfb.png">

**Screenshot**

<img width="600" alt="image" src="https://user-images.githubusercontent.com/52306317/185813651-09440b1f-7ba4-4ec5-b1f3-1d0b97169341.png">

**Add a new sensor to the database**

<img width="600" alt="image" src="https://user-images.githubusercontent.com/52306317/185813669-57aa0b0d-27f4-419b-9029-c96fc78c50b0.png">




## How to install the App
 
**Requirement**

- Any iOS System (Suggestions: iPhone X and above)


**Steps**
1. Download **Unity_ios_app** folder in repository
2. Download **Unity_ios_app_others** from this [link](https://drive.google.com/drive/folders/1TLBD_9sWFYAgYLjxcWNP1_Kc4d8Exv8x?usp=sharing)
3. Put **Frameworks** folder inside the downloaded **Unity_ios_app** folder
4. Put **libil2cpp.a** and **libiPhone-lib.a** inside **Unity_ios_app** -> **Libraries**
5. Put **resources.assets.resS** inside **Unity_ios_app** -> **Data**
6. Open **Unity_ios_app** -> **Unity-iPhone.xcworkspace** in Xcode
7. Run the applicaion on the ios devices



##  Package used
•	m2mqtt https://github.com/eclipse/paho.mqtt.m2mqtt
•	gltFast https://github.com/atteneder/glTFast
Firebase Authentication SDK
Mapbox SDK
Vuforia SDK
NativeGallery


##  Contact Details

<a href="https://twitter.com/v830108ku543"><img src="https://user-images.githubusercontent.com/35039342/55471524-8e24cb00-5627-11e9-9389-58f3d4419153.png" width="60"></a>
<a href="https://www.linkedin.com/in/vivianchinku/"><img src="https://user-images.githubusercontent.com/35039342/55471530-94b34280-5627-11e9-8c0e-6fe86a8406d6.png" width="60"></a>





