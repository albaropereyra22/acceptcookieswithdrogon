#pragma once

#include <drogon/HttpSimpleController.h>

using namespace drogon;

class features : public drogon::HttpSimpleController<features>
{
  public:
    void asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) override;
    PATH_LIST_BEGIN
    // list path definitions here;
    PATH_ADD("/features", "acceptCookies", Get);
    PATH_LIST_END
};
