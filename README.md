### AirSim with Faster RGBD Camera

This project inherits all interfaces from AirSim, except for the camera. I have focused on improving the camera rendering speed, addressing potential bottlenecks in the original AirSim implementation that may have been affecting performance. For faster camera rendering **(25HZ 1080*720 rgb &depth on RTX3060 while 5HZ in origin Airsim )**, you can enjoy an optimized experience in this project. The ROS interface for the camera is available in a separate repository.

---

### Setup and Build Instructions

1. **Clone the repository**:
   ```bash
   git clone https://github.com/9woods123/Airsim_faster_rgbd.git
   ```

2. **Generate Visual Studio Project**:
   - Right-click on `uav_sim.uproj` and select *Generate Visual Studio project*.

3. **Build the Project**:
   - In Visual Studio, set the configuration to *Development Editor* and target *Win64*.
   - Press `Ctrl + Shift + B` to compile the project.

4. **Run the Project**:
   - Open the Unreal Engine Editor and click the *Run* button.

5. **Camera UIt**:
 - press keyboard “C” to open or close the new UI of our rgbd camera

---

![image](https://github.com/user-attachments/assets/a3f8e793-a049-4ffa-ae16-f3e4d4b040b2)

---


![image](https://github.com/user-attachments/assets/dc5d0284-e852-4e40-8d54-07b833465a4f)

