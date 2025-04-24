### AirSim with Faster RGBD Camera


## 🚀 High-Performance Camera for AirSim

This project inherits all interfaces from the original [AirSim](https://github.com/microsoft/AirSim), **except for the camera system**, which has been **significantly optimized**.

### ✅ Improvements:
- Optimized **camera rendering pipeline** for better real-time performance.
- Achieves **25 Hz RGB + Depth capture at 1080×720 resolution** on **RTX 3060**, compared to the original AirSim's ~5 Hz under similar conditions.
- Ideal for real-time simulation, SLAM, or visual-based robotics tasks.

### 📷 ROS Integration:
For ROS users, camera interfaces are provided via a separate ROS bridge:
👉 [[https://github.com/9woods123/cmd2airsim.git](https://github.com/9woods123/cmd2airsim.git)]

### ⚙️ Unreal Engine Settings:
To get the most out of this optimization, **make sure your project settings are correct**:

- Go to `Project Settings > Engine > General Settings`
- Set:
  ```text
  Framerate > Use Fixed Frame Rate = false
  ```
  This prevents Unreal from enforcing a fixed tick interval, which can throttle your camera update rate.


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


