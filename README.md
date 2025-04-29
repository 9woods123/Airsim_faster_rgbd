

# AirSim 高性能 RGBD 相机扩展版

## 🚀 面向实时任务的高性能相机系统

本项目基于 [AirSim](https://github.com/microsoft/AirSim) 开发，**对相机系统进行了深度优化**，适用于实时仿真任务。

---

### ✅ 核心改进

- 重构相机渲染管线，性能显著提升；
- 在 RTX 3060 上，1080×720 分辨率可达 **30Hz 的 RGB + Depth 同步输出**；
- 原版 AirSim 同条件下仅约 5Hz；
- 更适合 SLAM、视觉导航、视觉控制等机器人应用场景。

---

## 📦 使用预编译版本（推荐）

我们在 [Releases](https://github.com/9woods123/Airsim_faster_rgbd/releases) 中提供了一个 **可直接运行的 Unreal 可执行文件版本**（打包好的游戏）。

### ✅ 运行方式（Linux）

1. 进入 Release 页面，下载 Linux 版本压缩包；
2. 解压后进入目录；
3. 执行以下命令启动游戏：

```bash
./uav_sim.sh
```

如遇权限问题：

```bash
chmod +x uav_sim.sh
```

### ✅ 使用提示

- 默认支持 **AirSim RPC 接口** 和 **优化后的 RGBD 相机接口**；
- 可与 ROS 桥 [`cmd2airsim`](https://github.com/9woods123/cmd2airsim.git) 配合使用；
- 按下键盘 `C` 可打开/关闭 RGBD 相机 UI 面板。  
  ![UI 面板](https://github.com/user-attachments/assets/8560bb4b-0a2f-4aac-9701-754b31dbb529)

---

## 🔧 自行编译项目（Windows）

1. 克隆仓库：

   ```bash
   git clone https://github.com/9woods123/Airsim_faster_rgbd.git
   ```

2. 使用 Unreal Editor 打开 `uav_sim.uproj`；
3. 右键 → 生成 Visual Studio 项目(在这之前，一定安装visual studio 2022，本工程是基于2022版本编译的，如果用其他版本，会出现sdk不匹配问题)；
4. 双击打开uav_sim.sln文件，选择编译配置为 development editor 和 win64
 ![image](https://github.com/user-attachments/assets/6b9d2e54-b77e-4edc-8785-a437896804cd)
![image](https://github.com/user-attachments/assets/12d4b96a-2b5f-4a76-9c2b-c3d68398ae0e)
6. ctrl shift B 编译通过后，再双击打开 `uav_sim.uproj` 即可使用。

---

## 🎮 Unreal 设置建议

为获得最佳帧率，请在以下位置取消固定帧率限制：

```text
Project Settings > Engine > General Settings
Framerate > Use Fixed Frame Rate = false
```

---

## 🗺 在自定义地图中使用 RGBD 相机系统

如果你希望在自己的关卡（Map）中使用 RGBD 相机系统：

### ✅ 操作步骤

1. 创建或打开你的地图关卡；
2. 拖入 `PlayerStart`；
3. 在地图设置中将 `GameMode` 设置为 `AirSimGameMode`：

<img width="1119" alt="GameMode 设置" src="https://github.com/user-attachments/assets/ff8d6183-fbb9-4367-af41-31352230507d" />

### 🔁 设置地图为默认加载

```text
Project Settings > Maps & Modes >
Editor Startup Map / Game Default Map
```

---

## 🛠️ 修改 Sensor 或 AirSim 插件

若你需要修改传感器或插件逻辑：

### ✅ 显示插件内容

1. 打开内容浏览器，点击左上角 “视图选项”；
2. 勾选 **“显示插件内容（Show Plugin Content）”**；
3. 即可看到 `AirSim` 插件相关内容。

<img src="https://github.com/user-attachments/assets/60275d54-1c24-454c-bc4e-676c2f2cf6d7" width="600"/>

### 🔍 查找并修改 Sensor 蓝图

1. 点击左上角的文件夹图标，启用路径面板；
2. 在搜索框中输入 `sensor`，查找相机蓝图资源：

<img src="https://github.com/user-attachments/assets/44e782f1-7242-45a6-bf31-92ff09ca63cc" width="600"/>

### 🧩 修改相机参数

打开 `BP_RGB_Camera` 蓝图，选中 `rgbCapture` 组件：

- 可在右侧的细节面板中修改发送频率和 UDP 端口。但请注意：**该 UDP 端口需与 ROS 图像接收节点中的端口保持一致**，因此**一般不建议修改**。  
  若确有需要（如端口已被占用），请同时参考 [`cmd2airsim`](https://github.com/9woods123/cmd2airsim.git) 项目，对 ROS 接收端的端口配置做相应调整。


<img src="https://github.com/user-attachments/assets/50a3cdc7-599f-47ca-ba68-d1aedb892d6b" width="600"/>

<img width="1280" alt="相机参数" src="https://github.com/user-attachments/assets/9217ea9a-b94a-4975-86f5-b07ad78b1bbe" />

---

## 📷 ROS 集成支持

本项目可通过以下桥接项目与 ROS 高效集成：

👉 [`cmd2airsim`](https://github.com/9woods123/cmd2airsim.git)

可将优化后的 RGBD 相机图像实时发布到 ROS，方便进行视觉 SLAM、跟踪、避障等处理。
