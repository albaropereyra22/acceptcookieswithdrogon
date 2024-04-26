#pragma once

#include <drogon/HttpSimpleController.h>

using namespace drogon;

class faq : public drogon::HttpSimpleController<faq>
{
  public:
    void asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) override;
    PATH_LIST_BEGIN
    // list path definitions here;
    PATH_ADD("/faqs", "acceptCookies",Get);
    PATH_LIST_END
};
