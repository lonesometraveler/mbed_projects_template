#include "mbed.h"
#include "debug.h"

EventQueue *queue = mbed_event_queue();

int main() {
    
#ifdef MBED_MAJOR_VERSION
    DBG("Mbed OS version: %d.%d.%d\n\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
#endif
            
    queue->dispatch_forever();
}
