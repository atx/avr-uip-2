#include <avr/pgmspace.h>
const char http_413_html[10] PROGMEM =
    /* "/413.html" */
{0x2f, 0x34, 0x31, 0x33, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0x00 };
const char http_referer[10] PROGMEM =
    /* "Referer: " */
{0x52, 0x65, 0x66, 0x65, 0x72, 0x65, 0x72, 0x3a, 0x20, 0x00 };
const char http_header_200[16] PROGMEM =
    /* "HTTP/1.0 200 OK" */
{0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x32, 0x30, 0x30, 0x20, 0x4f, 0x4b, 0x00 };
const char http_header_404[23] PROGMEM =
    /* "HTTP/1.0 404 Not found" */
{0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x34, 0x30, 0x34, 0x20, 0x4e, 0x6f, 0x74, 0x20, 0x66, 0x6f, 0x75, 0x6e, 0x64, 0x00 };
const char http_server[50] PROGMEM =
    /* "Server: uIP/1.0 http://code.google.com/p/avr-uip/" */
{0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x3a, 0x20, 0x75, 0x49, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f, 0x63, 0x6f, 0x64, 0x65, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x70, 0x2f, 0x61, 0x76, 0x72, 0x2d, 0x75, 0x69, 0x70, 0x2f, 0x00 };
