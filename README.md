

# AirSim 高性能 RGBD 相机扩展版

欢迎使用 **AirSim 高性能 RGBD 相机扩展版**！本项目基于 [AirSim](https://github.com/microsoft/AirSim) 开发，专注于优化相机系统，特别是 RGBD 相机的性能，广泛适用于实时仿真任务，尤其是在 **SLAM、视觉导航、视觉控制等机器人应用场景**中表现出色。

---

## 🚀 项目简介

该项目旨在提升 AirSim 中的 RGBD 相机系统，重构了渲染管线，优化了数据传输和处理效率，特别适用于高性能计算任务。主要改进包括：

- 提高 **30Hz RGB + Depth 输出**，分辨率高达 1080×720。
- 相比原版 AirSim，在相同硬件上支持 **更高的输出频率**。

---

## 🛠️ 使用和安装

为了帮助您快速开始，项目提供了多种安装和运行方式，包括预编译版本和自行编译的指南。具体步骤请访问我们的详细 Wiki 文档：

- [安装指南](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Installation)
- [开发者指南](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Developer_Guide)

---

## 📦 预编译版本（推荐）

我们提供了 **可直接运行的 Unreal 可执行文件版本**，无需额外配置。  
具体的安装和运行方式请参考 [预编译版本指南](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Precompiled-Version)。

---

## 🔧 自行编译项目

如果您希望在 Windows 或 Linux 上自行编译项目，您可以参考以下指南：

- [Windows 编译指南](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Windows-Build)
- [Linux 编译指南](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Linux-Build)

---

## 🎮 使用自定义地图

希望将优化后的 RGBD 相机系统集成到您自己的地图关卡中？  
参考我们的 [自定义地图指南](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Custom-Map-Usage) 了解如何操作。

---

## 🔄 ROS 集成

本项目支持与 ROS 的高效集成，您可以通过以下桥接项目实时将优化后的 RGBD 图像发布到 ROS：

- [ROS 集成与 cmd2airsim 项目](https://github.com/9woods123/cmd2airsim.git)

更多 ROS 集成细节，请参见 [ROS 集成指南](https://github.com/9woods123/Airsim_faster_rgbd/wiki/ROS-Integration)。

---

## 📷 修改传感器或插件

如果您需要修改传感器参数或 AirSim 插件逻辑，参考以下指南：

- [修改传感器与插件](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Sensor-and-Plugin-Modification)

---

## 📝 常见问题（FAQ）

遇到问题？请访问我们的 [常见问题页面](https://github.com/9woods123/Airsim_faster_rgbd/wiki/FAQ) 了解解决方案。

---

## 🔗 访问 Wiki 获取更多信息

有关更详细的操作指南、开发细节及常见问题解答，请访问我们的完整 [Wiki 页面](https://github.com/9woods123/Airsim_faster_rgbd/wiki)。

---

### 主要链接：

- [Wiki首页](https://github.com/9woods123/Airsim_faster_rgbd/wiki)
- [安装指南](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Installation)
- [开发者指南](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Developer_Guide)
- [预编译版本](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Precompiled-Version)
- [Windows 编译](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Windows-Build)
- [Linux 编译](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Linux-Build)
- [自定义地图](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Custom-Map-Usage)
- [ROS 集成](https://github.com/9woods123/Airsim_faster_rgbd/wiki/ROS-Integration)
- [传感器和插件修改](https://github.com/9woods123/Airsim_faster_rgbd/wiki/Sensor-and-Plugin-Modification)
- [常见问题](https://github.com/9woods123/Airsim_faster_rgbd/wiki/FAQ)

