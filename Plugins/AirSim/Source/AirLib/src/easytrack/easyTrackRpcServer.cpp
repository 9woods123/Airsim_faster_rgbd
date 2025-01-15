#include "easytrack/easyTrackRpcServer.hpp"

namespace msr
{
namespace airlib
{

    easyTrackRpcServer::easyTrackRpcServer(const std::string& ip_address, uint16_t port)
    : server_(ip_address, port)
    {
    // 注册一个获取玩家位置的 RPC 方法
    server_.bind("GetPlayerPosition", [&](int32_t player_index) {
        return GetPlayerPosition(player_index);
    });

}

    void easyTrackRpcServer::startServer(int num_threads)
    {
        // 启动服务器，使用指定数量的线程来处理请求
        server_.async_run(num_threads);
    }

    void easyTrackRpcServer::stopServer()
    {
        // 停止服务器
        server_.stop();
    }


} // namespace airlib
} // namespace msr
