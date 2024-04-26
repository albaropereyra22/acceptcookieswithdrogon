#pragma once

#include <drogon/HttpSimpleController.h>

using namespace drogon;

class pricing : public drogon::HttpSimpleController<pricing>
{
  public:
    void asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) override;
    PATH_LIST_BEGIN
    // list path definitions here;
    PATH_ADD("/pricing", "acceptCookies",Get);
    PATH_LIST_END
};
