

# AirSim 高性能 RGBD 相机扩展版

## 🚀 面向实时任务的高性能相机系统

本项目基于 [AirSim](https://github.com/microsoft/AirSim) 开发，**对相机系统进行了深度优化**，适用于实时仿真任务。

---

### ✅ 核心改进：

- 重构相机渲染管线，性能显著提升；
- 在 RTX 3060 上，1080×720 分辨率可达 **25Hz 的 RGB + Depth 同步输出**；
- 相比原版 AirSim 同条件下仅约 5Hz；
- 更适合 SLAM、视觉导航、视觉控制等机器人应用场景。

---

## 📦 使用预编译版本（推荐）

我们在 [Releases](https://github.com/9woods123/Airsim_faster_rgbd/releases) 中上传了一个 **可直接运行的 Unreal 可执行文件版本（打包好的游戏）**。

如果你不打算自己打开 UE 编译项目，可直接使用以下方式运行：

### ✅ 直接运行方式（Linux）

1. 进入 Release 页面，下载 Linux 版本的压缩包；
2. 解压后，进入解压目录；
3. 运行以下命令启动游戏：

```bash
./uav_sim.sh
```

> 如果遇到权限问题，可执行：
>
> ```bash
> chmod +x uav_sim.sh
> ```

### ✅ 使用注意：

- 默认支持 **AirSim RPC 接口** 和 **优化后的 RGBD 相机接口**；
- 可与 ROS 桥（[cmd2airsim](https://github.com/9woods123/cmd2airsim.git)）配合使用；
- 你依然可以使用键盘 “C” 打开/关闭 RGBD 相机 UI 面板。
![image](https://github.com/user-attachments/assets/8560bb4b-0a2f-4aac-9701-754b31dbb529)

---

## 🔧 如果你希望自己编译工程

请参考以下流程：

1. 克隆仓库：

   ```bash
   git clone https://github.com/9woods123/Airsim_faster_rgbd.git
   ```

2. 使用 Unreal Editor 打开 `uav_sim.uproj`；
3. 右键 → 生成 Visual Studio 项目（Windows）；
4. 编译后运行即可。

---

## 🎮 Unreal 设置建议

为获得最佳帧率，请将以下选项关闭：

- `Project Settings > Engine > General Settings`
- 将：

  ```text
  Framerate > Use Fixed Frame Rate = false
  ```

  设置为 false，避免限制渲染速率。

---



## 🗺 在自定义地图中使用 AirSim

如果你希望在 **自己的关卡（Map）中使用本项目的 RGBD 相机系统**，请按照以下步骤操作：

### ✅ 步骤如下：

1. **创建或打开你的自定义关卡**；
2. **将 `PlayerStart` 拖入场景**
3. 点击关卡，确认如下设置：
     - GameMode：选择 `AirSimGameMode`；
<img width="1119" alt="1745563785707" src="https://github.com/user-attachments/assets/ff8d6183-fbb9-4367-af41-31352230507d" />

### 🔁 绑定你的地图为默认加载：

若希望启动时自动加载你自己的地图，可设置：

```text
Project Settings > Maps & Modes > Editor Startup Map / Game Default Map
```


选择你的关卡名（例如 `MyCustomMap`）。

## 📷 ROS 集成

配套的 ROS 接口桥项目见：

👉 [https://github.com/9woods123/cmd2airsim.git](https://github.com/9woods123/cmd2airsim.git)

支持将优化后的 RGBD 相机图像实时发布至 ROS，便于融合视觉信息处理。

