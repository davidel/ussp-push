/*    Copyright 2023 Davide Libenzi
 * 
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 * 
 *        http://www.apache.org/licenses/LICENSE-2.0
 * 
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 * 
 */


#if !defined(_OBEX_MACROS_H)
#define _OBEX_MACROS_H


extern int bt_debug;

#define BTDEBUG(fmt, args...) do { if (bt_debug) fprintf(stderr, fmt, ##args); } while (0)
#define BTERROR(fmt, args...) fprintf(stderr, fmt, ##args);

#endif

