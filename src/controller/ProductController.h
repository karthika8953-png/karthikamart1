
#ifndef PRODUCT_CONTROLLER_H
#define PRODUCT_CONTROLLER_H

#include <drogon/HttpController.h>

class ProductController : public drogon::HttpController<ProductController> {
public:
    METHOD_LIST_BEGIN
    ADD_METHOD_TO(ProductController::getProducts, "/api/products", drogon::Get);
    METHOD_LIST_END

    void getProducts(
        const drogon::HttpRequestPtr& request,
        std::function<void(const drogon::HttpResponsePtr&)>&& callback
    );
};

#endif