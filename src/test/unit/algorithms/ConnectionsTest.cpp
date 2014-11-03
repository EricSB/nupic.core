/* ---------------------------------------------------------------------
 * Numenta Platform for Intelligent Computing (NuPIC)
 * Copyright (C) 2013, Numenta, Inc.  Unless you have an agreement
 * with Numenta, Inc., for a separate license for this software code, the
 * following terms and conditions apply:
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses.
 *
 * http://numenta.org/licenses/
 * ---------------------------------------------------------------------
 */

/** @file
 * Implementation of unit tests for Connections
 */

#include <iostream>
#include "ConnectionsTest.hpp"

using namespace std;
using namespace nta::algorithms::connections;

namespace nta {

  void ConnectionsTest::RunTests()
  {
    testCreateSegment();
    testComputeActivity();
  }

  void ConnectionsTest::setup(Connections& connections)
  {
  }

  void ConnectionsTest::testCreateSegment()
  {
    Connections connections;
    setup(connections);

    NTA_ASSERT(connections.createSegment(10) == 0);
  }

  void ConnectionsTest::testComputeActivity()
  {
    Connections connections;
    setup(connections);
    vector<UInt> input;
    input.push_back(20);
    input.push_back(10);

    Activity connectedActivity = connections.computeActivity(input, 0.10, 5);
    // TODO: Add assertion
  }

} // end namespace nta
