# waterLevelSensor
an Arduino project for an ESP8266 with readingXKC-Y25-V water level sensor that sends notification to a telegram bot


  As the summer heat approaches, many of us face the tedious task of emptying the condensation reservoir of our AC units. It's a common scenario: you forget to empty it, and when you finally remember, it's too late — water has already spilled onto the floor. To address this issue, I found a solution: installing a water level detector on the reservoir.

  To implement this solution, you'll need a few essential materials: 
  - a programmable controller with Wi-Fi connection,
  - a sensor,
  - and cables.

Step 1. The first item on the list is a programmable controller with Wi-Fi connection. This device will serve as the brain of the operation, allowing you to monitor the water level remotely and receive alerts when the reservoir needs attention. There are various programmable controllers available in the market, so you can choose one that best fits your requirements and budget. I chose to use: NodeMcu V3 because it's very popular and inexpensive. 

Step 2. You'll need a sensor to detect the water level in the reservoir. There are different types of sensors that can be used for this purpose, such as ultrasonic sensors, capacitive sensors, or float switches. Each type has its own advantages and considerations, so it's important to select a sensor that is suitable for the size and material of your reservoir.

For example if you want to use similar setup to control if any amount of water is being present you can use this type: [https://www.amazon.es/profundidad-detecci%C3%B3n-l%C3%ADquido-superficie-Arduino/dp/B06XQ496SW?source=ps-sl-shoppingads-lpcontext&ref_=fplfs&psc=1&smid=AWLU8WJU8S0VS ](https://www.amazon.es/profundidad-detecci%C3%B3n-l%C3%ADquido-superficie-Arduino/dp/B06XQ496SW?source=ps-sl-shoppingads-lpcontext&ref_=fplfs&psc=1&smid=AWLU8WJU8S0VS)

Or if you want to make a "smart" plant pot you can use this sensor for relative humidity measuerements: [https://acortes.co/proyecto-27-sensor-de-humedad-de-suelo/](https://acortes.co/proyecto-27-sensor-de-humedad-de-suelo/)

For my purposes I decided to use XKC-Y25-NPN: [https://www.amazon.es/Xkc-Y25-Npn-Detector-contacto-Interfaz-Condensador/dp/B088PGKPJ4](https://www.amazon.es/Xkc-Y25-Npn-Detector-contacto-Interfaz-Condensador/dp/B088PGKPJ4) 

The non-contact liquid level sensor XKC-Y25-V is based on a capacitive sensing element that reacts to changes in dielectric constant. This property allows the level switch to detect liquid through various non metallic obstacles: plastic, glass, ceramics, etc. The liquid sensor will even detect the touch of your hand. The maximum wall thickness of the obstacle and therefore the sensitivity distance of the sensor is 12 mm. Important disadvantage to note is that the sensor will not work with metal obstacles,but since there is no direct contact with the detected liquids, the sensor can be used with acids, alkalis, as well as liquids at high temperature or under pressure, wich can be very crucial in some applications. To install the level switch, it is not necessary to drill holes in the tank and place the sensor inside the tank - simply attach the sensor to the enclosure wall with double-sided tape.

Step 3. You'll need cables to connect the sensor to the programmable controller. The type and length of the cables will depend on the distance between the sensor and the controller, as well as any environmental factors that may affect the wiring. 

  Here's the setup that I got at the end:
  ![PXL_20240610_135349981](https://github.com/adelina344/waterLevelSensor/assets/38438913/33d5ddce-f203-4c6e-b92f-d67d47919a40)

Once you have gathered all the necessary materials, it's time to set up the water level detector. First, install the sensor in the condensation reservoir, ensuring that it is positioned to accurately detect the water level. Then, connect the sensor to the programmable controller using the appropriate cables. Connection of the sensor to the board is illustrated on the picture below:
![eee8ce5d7d512030b5fd4356d7c8d7db](https://github.com/adelina344/waterLevelSensor/assets/38438913/f288afa3-2fcf-4d71-a687-a780e7b90c1a) 

With the hardware in place, the next step is to program the controller to monitor the water level and send alerts when the water level is high. For developing the programm I will be using Arduino IDE. For setting up the workspace in Arduino I followed this article: [https://www.instructables.com/Getting-Started-With-ESP8266LiLon-NodeMCU-V3Flashi/]

Source code for the project you can find following this link: []
Once everything is set up and programmed, you can sit back and relax knowing that your AC's condensation reservoir is being monitored. If the water level reaches a certain point, you'll receive a notification, allowing you to empty the reservoir before any spillage occurs. Here'san example of the messages that the Board sends:
![Screenshot 2024-06-10 175532](https://github.com/adelina344/waterLevelSensor/assets/38438913/a88ad13c-19fe-47b7-a6a0-8f55a0ab1716)
In conclusion, by installing a water level detector on your AC unit's condensation reservoir, you can effectively prevent water overflow and the associated mess and damage. With the right materials and a bit of programming, you can enjoy a cooler and more worry-free summer.
