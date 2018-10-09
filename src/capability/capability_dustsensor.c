/*
 * resource_capability_dustsensor_main_0.c
 *
 *  Created on: Oct 9, 2018
 *      Author: segaon
 */

#include <stdio.h>
#include <stdbool.h>
#include "st_things.h"
#include "log.h"


static const char* PROP_DUSTLEVEL = "dustLevel";
static const char* PROP_FINEDUSTLEVEL = "fineDustLevel";

bool handle_get_request_on_resource_capability_dustsensor_main_0(st_things_get_request_message_s* req_msg, st_things_representation_s* resp_rep)
{
    DBG("Received a GET request on %s\n", req_msg->resource_uri);

    if (req_msg->has_property_key(req_msg, PROP_DUSTLEVEL)) {
        // TODO: Write your implementation in this section.
    }
    if (req_msg->has_property_key(req_msg, PROP_FINEDUSTLEVEL)) {
        // TODO: Write your implementation in this section.
    }
    return false;  // FIXME: Modify this line with the appropriate return value.
}
