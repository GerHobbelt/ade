// Copyright (C) 2018 Intel Corporation
//
//
// SPDX-License-Identifier: Apache-2.0
//

#include <iostream>
#include <ade/graph.hpp>

#if defined(BUILD_MONOLITHIC)
#define main ade_tutorial_01_hello_main
#endif

extern "C"
int main(void)
{
    ade::Graph graph;
    std::cout << "Emtpy graph has " << graph.nodes().size() << " nodes. A great start!" << std::endl;
    return 0;
}
