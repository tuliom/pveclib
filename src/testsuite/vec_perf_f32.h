/*
 Copyright (c) [2018] IBM Corporation.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 vec_perf_i128.h

 Contributors:
      IBM Corporation, Steven Munroe
      Created on: Jul 4, 2018
 */

#ifndef TESTSUITE_VEC_PERF_F32_H_
#define TESTSUITE_VEC_PERF_F32_H_

extern int timed_is_f32 (void);
extern int timed_fpclassify_f32 (void);
extern int timed_scalar_f32_transpose ();
extern int timed_gather_f32_transpose ();
extern int timed_gatherx2_f32_transpose ();
extern int timed_gatherx4_f32_transpose ();

#endif /* TESTSUITE_VEC_PERF_F32_H_ */
