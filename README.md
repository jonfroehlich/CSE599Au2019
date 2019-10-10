# CSE599 Prototyping Interactive Systems
![Example assignments and projects from previous incarnations of this course: CMSC838f at UMD](https://github.com/jonfroehlich/CSE599Sp2019/blob/master/docs/ExampleAssignmentsAndProjects.jpg "Example assignments and projects")
This course explores the materiality and physicality of interactive computing via rapid prototyping. In the words of MIT professor Hiroshi Ishii, we will seek to “seamlessly couple the dual worlds of bits and atoms.” This is a particularly interesting time to survey and explore this area because of three, interrelated technology trends:

- **The emergence of the DIY/Makers movement**, which has led to widespread opportunities to interface and work with hardware that has rather low barriers of entry (e.g., the Arduino), provides new opportunities for coupling form with computation (e.g., through digital fabrication), and provides countless online materials/tutorials to help us along.
- **The pervasiveness of powerful mobile computers and IoT devices** that are constantly on and nearly constantly with us (or around us) and imbued with a rich array of sensors such as accelerometers, gyroscopes, and location-sensing that allow for new types of off-the-desktop interaction
- **Advancements in machine learning and computer vision and maturing ML/CV toolkits/APIs** that enable us to process and use sensor data in new ways for human-computer interaction (without being experts in ML or CV ourselves!)

Taken together, we can no longer simply consider the [GUI](https://en.wikipedia.org/wiki/Graphical_user_interface) and [WIMP](https://en.wikipedia.org/wiki/WIMP_%28computing) interfaces as primary interaction models for computing. We must explore new spaces of interaction that are, in part, enabled by the above three points. In this class, we will use materials to help us think and to push our own boundaries of what interactive computing is and could be. 

## Course Curriculum
This is a new class that will be purposefully experimental. I taught it once before ([Spring 2019](https://github.com/jonfroehlich/CSE599Sp2019)) but will be iterating, adding, and subtracting content as we go--this approach offers freshness and flexibility but at a cost, perhaps, of predictability and polish. For my graduate courses (like this one!), I always try to incorporate new technologies, techniques, and methods--some which are new to me—which means that we will be learning together. :) Optmistically, I plan to cover:

- **Prototyping Processes and Rationale**
  - Background and theories about ideation, prototyping, and the science of design
  - When and how to prototype
  - Apply HCI design process to interactive device design from form to function
- **Prototyping Physical Computing Systems**
  - Introduce and learn basics of electronic circuits, including voltage, current, and resistance
  - Introduce and learn basic circuit design concepts, including voltage dividers, pull-up and pull-down resistors
  - Introduce and learn the popular embedded prototyping platform Arduino and programming concepts therein
  - Introduce and learn basic IoT concepts (e.g., connecting to a device, I/O).
  - Introduce and learn basics of electro-mechanical design (i.e., designing for actuation)
- **Prototyping Form**
  - Learn the basics of the 3D-fabrication workflow (measuring, CAD modeling, slicing, printing, iterating)
  - Gain experience building hardware enclosures for an electro-mechanical design
  - Gain experience and basic knowledge of a state-of-the-art CAD tool (Autodesk Fusion 360)
- **Prototyping Machine Learning for HCI (i.e., Applied Machine Learning for HCI)**
  - Introduce and learn basic machine learning approaches popular in HCI/UbiComp, including shape matching and feature-based classification
  - Introduce and learn basic machine learning pipeline: data collection, signal processing, model training, and model testing using k-fold cross validation
  - Introduce and learn popular data analytics tools and toolkits (e.g., Jupyter Notebook, scipy)
  - Introduce and learn popular machine learning toolkits (scikit learn, cloud-based apis)
- **Optimistically: Applied Computer Vision for HCI**
  - I tried to throw this in last year but I couldn't squeeze it in. We'll try again this year. :)
  - Introduce and learn basic image processing and computer vision techniques most relevant to HCI
  - Gain experience using computer vision libraries and basic understandings of CV principles
  - Reinforce ML pipeline previously discussed
  
## Lectures
### [Lecture 01: Prototyping Interactive Systems](https://github.com/jonfroehlich/CSE599Au2019/blob/master/Lectures/CSE599_L01-PrototypingInteractiveSystems.pdf)
- What are interactive systems?
- Course overview
- Overview of A1: Interactive Night Light assignment
- How to prototype interactive systems

### [Lecture 02: Physcomp 1: Circuits](https://github.com/jonfroehlich/CSE599Au2019/blob/master/Lectures/CSE599_L02-PhysicalComputing1-Circuits.pdf)
- What is a **circuit**, **voltage**, **current**, and **resistance**
- What is a **resistor** and how to use it
- What is an **LED** and how to use it (e.g., polarity, current limiting resistor) 
- What is **Ohm’s Law** and why is it useful?
- **Series** vs. **parallel resistive** circuit configurations
- What is a **breadboard** and how to use it
- How to **read a datasheet**

### [Lecture 03: Physcomp 2: Arduino & Digital Output](https://github.com/jonfroehlich/CSE599Au2019/blob/master/Lectures/CSE599_L03-PhysicalComputing2-ArduinoAndOutput.pdf)
- Reinforce some **circuit concepts** from last week
- What is **Arduino?** Both hardware and software
- How to use **digital output** (i.e., turning on/off an LED using digitalWrite) 
- How to debug using **Serial Monitor** and **multimeters**
- How to use an **RGB LED** (if time)

### [Lecture 04: Physcomp 3: Arduino & Analog Output](https://github.com/jonfroehlich/CSE599Au2019/blob/master/Lectures/CSE599_L04-PhysicalComputing3-AnalogOutput.pdf)
- What is **analog output**?
- What is **PWM** and why does it matter?
- How to use **analogWrite()**
- How to output a **true analog signal** using DACs
- Introduction to **vibration motors** and how to use them
- (Partial) Introduction to **potentiometers** and **analog input** (if time)
