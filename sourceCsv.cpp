#pragma once
#include "sourceCsv.h"

namespace nerlnet
{
    SourceCSV::SourceCSV(int type, int batch_id, int duration, std::vector<std::string> &targets, int policy, int batch_size,
                        double desired_bps, std::string &source_name, double supported_bps, int epochs,
                        int total_batches, std::string &csv_path, bool no_dur_limit)
                        :SourceDriver(type, batch_id, duration, targets, policy, batch_size, desired_bps,
                         source_name, supported_bps)
    {
        _epochs = epochs;
        _total_batches = total_batches;
        _csv_path = csv_path;
        _no_dur_limit = no_dur_limit;
    }
    SourceCSV::~SourceCSV()
    {
    }

    void SourceCSV::load_csv(std::string &csv_path)
    {
        //load the csv file.
    }

    // virtual int SourceCSV::get_batch() override
    // {
    //     return _batch_size;
    // }
    std::shared_ptr<char> SourceCSV::get_batch()
    {
        return std::shared_ptr<char>();
    }
}