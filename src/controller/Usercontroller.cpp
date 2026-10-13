
#include "UserController.h"

void UserController::registerUser(
    const drogon::HttpRequestPtr& request,
    std::function<void(const drogon::HttpResponsePtr&)>&& callback
) {
    Json::Value result;
    result["message"] = "Registration endpoint is ready";
    result["status"] = "success";

    auto response = drogon::HttpResponse::newHttpJsonResponse(result);
    callback(response);
}