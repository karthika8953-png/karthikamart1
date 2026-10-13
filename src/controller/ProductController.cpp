
#include "ProductController.h"

void ProductController::getProducts(
    const drogon::HttpRequestPtr& request,
    std::function<void(const drogon::HttpResponsePtr&)>&& callback
) {
    Json::Value result;
    result["message"] = "KarthikaMart Products API";
    result["status"] = "success";

    auto response = drogon::HttpResponse::newHttpJsonResponse(result);
    callback(response);
}