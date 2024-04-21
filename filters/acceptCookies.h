/**
 *
 *  acceptCookies.h
 *
 */

#pragma once

#include <drogon/HttpFilter.h>
using namespace drogon;


class acceptCookies : public HttpFilter<acceptCookies>
{
  public:
    acceptCookies() {}
    void doFilter(const HttpRequestPtr &req,
                  FilterCallback &&fcb,
                  FilterChainCallback &&fccb) override;
};

