#ifndef _READEMPTYFILETEST_HPP_
#define _READEMPTYFILETEST_HPP_

#include "Test.hpp"

class ReadEmptyFileTest : public Test
{
    public :
        ReadEmptyFileTest();

        virtual void init() override;
        virtual bool run() override;
};

#endif
