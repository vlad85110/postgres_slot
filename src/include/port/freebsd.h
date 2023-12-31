/* src/include/port/freebsd.h */

/*
 * Set the default wal_sync_method to fdatasync.  xlogdefs.h's normal rules
 * would prefer open_datasync on FreeBSD 13+, but that is not a good choice on
 * many systems.
 */
#define PLATFORM_DEFAULT_WAL_SYNC_METHOD	WAL_SYNC_METHOD_FDATASYNC
