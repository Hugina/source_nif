#pragma once
#include <vector>
#include "SourceDriver.h"

namespace nerlnet
{
    class SourceCSV : public SourceDriver
    {
        public:
        SourceCSV(int type, int batch_id, int duration, std::vector<std::string> &targets, int policy, int batch_size,
                 double desired_bps, std::string &source_name, double supported_bps, int epochs,
                int total_batches, std::string &csv_path, bool no_dur_limit);
        ~SourceCSV();
        void load_csv(std::string &csv_path);
        std::shared_ptr <char> get_batch() override;

        private:

        protected:
        int _epochs;
        int _total_batches;
        std::string _csv_path;
        bool _no_dur_limit;

    };

}// namespace nerlnet