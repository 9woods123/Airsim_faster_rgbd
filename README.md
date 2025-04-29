要让这个 README 更有层次感，可以通过以下几种方式来改善排版、突出重点，并使得结构更清晰。以下是对原文的重构建议：

---

# AirSim 高性能 RGBD 相机扩展版

## 🚀 项目简介

本项目基于 [AirSim](https://github.com/microsoft/AirSim) 开发，针对相机系统进行了深度优化，特别适用于实时仿真任务，尤其在 **SLAM、视觉导航、视觉控制等机器人应用场景**中表现出色。

---

## ✅ 核心改进

- **重构相机渲染管线**：提升性能，优化了数据传输和处理。
- **更高的输出频率**：在 RTX 3060 上，提供 **30Hz 的 RGB + Depth 同步输出**，分辨率为 1080×720。
- **与原版 AirSim 比较**：原版在同等硬件条件下，RGBD 输出仅能支持约 **5Hz**。

---

## 📦 使用预编译版本（推荐）

我们提供了一个 **可直接运行的 Unreal 可执行文件版本**，用户无需额外配置，方便快捷。

### ✅ 运行方式（Linux）

1. 访问 [Releases 页面](https://github.com/9woods123/Airsim_faster_rgbd/releases) 下载 Linux 版本压缩包。
2. 解压后进入目录，并执行以下命令启动游戏：

```bash
./uav_sim.sh
```

如果遇到权限问题，使用以下命令修复：

```bash
chmod +x uav_sim.sh
```

### ✅ 使用提示

- 默认支持 **AirSim RPC 接口** 和 **优化后的 RGBD 相机接口**。
- 可与 ROS 桥接项目 [`cmd2airsim`](https://github.com/9woods123/cmd2airsim.git) 配合使用。
- 按 `C` 键可打开/关闭 RGBD 相机 UI 面板。  
  ![UI 面板](https://github.com/user-attachments/assets/8560bb4b-0a2f-4aac-9701-754b31dbb529)

---

## 🔧 安装 Visual Studio 2022

本工程基于 **Visual Studio 2022** 编译，确保安装了该版本并选择必要的 SDK，以避免缺少依赖的错误。
![屏幕截图 2025-04-29 091853](https://github.com/user-attachments/assets/1d955009-a181-46e7-b6f3-93efa9bc4a66)
![屏幕截图 2025-04-29 091909](https://github.com/user-attachments/assets/45df2b32-e76b-41e2-bd52-06febd17fc8f)
![屏幕截图 2025-04-29 085820](https://github.com/user-attachments/assets/2f42c946-192a-4979-9b3a-08ef3c311f51)

---

## 🔧 自行编译项目（Windows）

### ✅ 步骤概览

1. 克隆项目：

```bash
git clone https://github.com/9woods123/Airsim_faster_rgbd.git
```

2. 打开 Unreal Editor，加载 `uav_sim.uproj` 项目。
3. 右键生成 Visual Studio 项目（确保安装 Visual Studio 2022）。
4. 双击打开 `uav_sim.sln`，选择 **开发者编辑器（Development Editor）** 和 **Win64** 配置。
   ![image](https://github.com/user-attachments/assets/6b9d2e54-b77e-4edc-8785-a437896804cd)
5. 使用 `Ctrl + Shift + B` 编译项目，成功后双击 `uav_sim.uproj` 即可运行。

---

## 🎮 Unreal 设置建议

为了获得更好的性能和帧率，请确保取消固定帧率限制：

```text
Project Settings > Engine > General Settings
Framerate > Use Fixed Frame Rate = false
```

---

## 🗺 在自定义地图中使用 RGBD 相机系统

若希望在自己的地图关卡中使用优化后的 RGBD 相机系统，请按以下步骤操作：

### ✅ 操作步骤

1. 创建或打开你的地图关卡。
2. 拖入 `PlayerStart`。
3. 在地图设置中，将 **GameMode** 设置为 `AirSimGameMode`。

   ![GameMode 设置](https://github.com/user-attachments/assets/ff8d6183-fbb9-4367-af41-31352230507d)

### 🔁 设置地图为默认加载

```text
Project Settings > Maps & Modes > 
Editor Startup Map / Game Default Map
```

---

## 🛠️ 修改传感器或 AirSim 插件

若需要修改传感器或插件逻辑，可参考以下步骤：

### ✅ 显示插件内容

1. 打开内容浏览器，点击左上角的 “视图选项”。
2. 勾选 **显示插件内容（Show Plugin Content）**，即可查看 `AirSim` 插件相关内容。

   ![插件内容](https://github.com/user-attachments/assets/60275d54-1c24-454c-bc4e-676c2f2cf6d7)

### 🔍 查找并修改相机蓝图

1. 启用路径面板，点击左上角的文件夹图标。
2. 搜索 `sensor`，即可查找到相机蓝图资源。

   ![搜索相机蓝图](https://github.com/user-attachments/assets/44e782f1-7242-45a6-bf31-92ff09ca63cc)

### 🧩 修改相机参数

1. 打开 `BP_RGB_Camera` 蓝图，选择 `rgbCapture` 组件。
2. 在右侧的细节面板中，可调整发送频率和 UDP 端口。
   - 请注意：**修改端口时需与 ROS 接收节点保持一致**，建议避免修改端口设置。

   ![相机参数](https://github.com/user-attachments/assets/50a3cdc7-599f-47ca-ba68-d1aedb892d6b)

---

## 📷 ROS 集成支持

本项目提供 ROS 集成功能，可以通过以下桥接项目与 ROS 高效集成：

👉 [`cmd2airsim`](https://github.com/9woods123/cmd2airsim.git)

该项目可以实时将优化后的 RGBD 相机图像发布到 ROS，适用于视觉 SLAM、避障、跟踪等应用。
