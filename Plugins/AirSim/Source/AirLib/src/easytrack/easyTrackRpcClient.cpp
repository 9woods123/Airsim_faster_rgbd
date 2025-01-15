#include "easytrack/easyTrackRpcClient.hpp"
#include "Eigen/Dense"

namespace msr
{
namespace airlib
{

    easyTrackRpcClient::easyTrackRpcClient(const std::string& ip_address, uint16_t port, float timeout_sec)
        : client_(ip_address, port)
    {
        client_.set_timeout(static_cast<int>(timeout_sec * 1000)); // 设置超时时间（毫秒）
    }

    // 获取指定玩家的世界位置
    Eigen::Vector3f easyTrackRpcClient::getPlayerPosition(int32_t player_index)
    {
        // 调用 RPC 方法获取位置数据
        auto response = client_.call("GetPlayerPosition", player_index);

        // 将 RPC 响应转换为包含三个 float 的数组
        std::vector<float> position_data = response.as<std::vector<float>>();

        // 确保数组大小为 3
        if (position_data.size() == 3) {
            // 将 float 数组转换为 Eigen::Vector3f
            Eigen::Vector3f position(position_data[0], position_data[1], position_data[2]);
            return position;
        }
        else {
            // 处理无效的数据情况
            throw std::runtime_error("Invalid position data received from server.");
        }
    }
}

}
