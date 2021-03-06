/* Copyright (c) 2012, Bastien Dejean
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef BSPWM_SETTINGS_H
#define BSPWM_SETTINGS_H

#include "types.h"

#define WM_NAME                  "bspwm"
#define CONFIG_NAME              WM_NAME "rc"
#define CONFIG_HOME_ENV          "XDG_CONFIG_HOME"
#define POINTER_MODIFIER         XCB_MOD_MASK_4
#define POINTER_MOTION_INTERVAL  17
#define EXTERNAL_RULES_COMMAND   ""
#define STATUS_PREFIX            "W"

#define NORMAL_BORDER_COLOR           "#30302f"
#define ACTIVE_BORDER_COLOR           "#474645"
#define FOCUSED_BORDER_COLOR          "#817f7f"
#define PRESEL_FEEDBACK_COLOR         "#f4d775"

#define PADDING              {0, 0, 0, 0}
#define WINDOW_GAP           6
#define BORDER_WIDTH         1
#define SPLIT_RATIO          0.5

#define BORDERLESS_MONOCLE          false
#define GAPLESS_MONOCLE             false
#define PADDINGLESS_MONOCLE         false
#define SINGLE_MONOCLE              false
#define FOCUS_FOLLOWS_POINTER       false
#define POINTER_FOLLOWS_FOCUS       false
#define POINTER_FOLLOWS_MONITOR     false
#define IGNORE_EWMH_FOCUS           false
#define CENTER_PSEUDO_TILED         true
#define CLICK_TO_FOCUS              false
#define HONOR_SIZE_HINTS            false
#define REMOVE_DISABLED_MONITORS    false
#define REMOVE_UNPLUGGED_MONITORS   false
#define MERGE_OVERLAPPING_MONITORS  false

char external_rules_command[MAXLEN];
char status_prefix[MAXLEN];

char normal_border_color[MAXLEN];
char active_border_color[MAXLEN];
char focused_border_color[MAXLEN];
char presel_feedback_color[MAXLEN];

padding_t padding;
int window_gap;
unsigned int border_width;
double split_ratio;

child_polarity_t initial_polarity;
uint16_t pointer_modifier;
uint32_t pointer_motion_interval;
pointer_action_t pointer_actions[3];

bool borderless_monocle;
bool gapless_monocle;
bool paddingless_monocle;
bool single_monocle;
bool focus_follows_pointer;
bool pointer_follows_focus;
bool pointer_follows_monitor;
bool ignore_ewmh_focus;
bool center_pseudo_tiled;
bool click_to_focus;
bool honor_size_hints;
bool remove_disabled_monitors;
bool remove_unplugged_monitors;
bool merge_overlapping_monitors;

void run_config(void);
void load_settings(void);

#endif
