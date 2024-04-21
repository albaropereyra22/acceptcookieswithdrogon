 /**
 *
 *  acceptCookies.cc
 *
 */

#include "acceptCookies.h"

using namespace drogon;

void acceptCookies::doFilter(const HttpRequestPtr &req,
                         FilterCallback &&fcb,
                         FilterChainCallback &&fccb)
{
    //Edit your logic here
    if (req->session()->getOptional<bool>("acceptedCookies").value_or(false))
    {
        //Passed
        fccb();
        return;
    }
    //Check failed
    auto res = drogon::HttpResponse::newRedirectionResponse("/");
    fcb(res);
}
