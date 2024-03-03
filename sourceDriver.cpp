#pragma once
#include "SourceDriver.h"


namespace nerlnet
{
    SourceDriver::SourceDriver(int type, int batch_id, int duration, std::vector<std::string> &targets, int policy, int batch_size,
                 double desired_bps, std::string &source_name, double supported_bps)
    {
        _type = type;
        _batch_id = batch_id;
        _duration = duration;
        _targets = targets;
        _policy = policy;
        _batch_size = batch_size;
        _desired_bps = desired_bps;
        _source_name = source_name;
        _supported_bps = supported_bps;
    }
       SourceDriver::~SourceDriver()
    {
    }
}