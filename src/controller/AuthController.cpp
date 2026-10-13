
#include "AuthController.h"

void AuthController::login(
    const drogon::HttpRequestPtr& request,
    std::function<void(const drogon::HttpResponsePtr&)>&& callback
) {
    Json::Value result;
    result["message"] = "Login endpoint is ready";
    result["status"] = "success";

    auto response = drogon::HttpResponse::newHttpJsonResponse(result);
    callback(response);
}