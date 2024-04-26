#pragma once

#include <drogon/HttpSimpleController.h>

using namespace drogon;

class about : public drogon::HttpSimpleController<about>
{
  public:
    void asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) override;
    PATH_LIST_BEGIN
    // list path definitions here;
    PATH_ADD("/about", "acceptCookies",Get);
    PATH_LIST_END
};
