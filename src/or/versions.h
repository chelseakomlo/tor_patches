#ifndef TOR_VERSIONS_H
#define TOR_VERSIONS_H

// corresponding to "0.2.9.1-alpha"
#define HIGHEST_VERSIONS_SUPPORTED "Cons=1-2" \
                                  "Desc=1-2" \
                                  "DirCache=1" \
                                  "HSDir=1" \
                                  "HSIntro=3" \
                                  "HSRend=1-2" \
                                  "Link=1-4" \
                                  "LinkAuth=1" \
                                  "Microdesc=1-2" \
                                  "Relay=1-2";

// corresponding to "0.2.7.5"
#define NEXT_HIGHEST_VERSIONS_SUPPORTED "Cons=1-2" \
                                        "Desc=1-2" \
                                        "DirCache=1" \
                                        "HSDir=1" \
                                        "HSIntro=3" \
                                        "HSRend=1" \
                                        "Link=1-4" \
                                        "LinkAuth=1" \
                                        "Microdesc=1-2" \
                                        "Relay=1-2";

// corresponding to "0.2.4.19"
#define LOWEST_VERSIONS_SUPPORTED "Cons=1" \
                                  "Desc=1" \
                                  "DirCache=1" \
                                  "HSDir=1" \
                                  "HSIntro=3" \
                                  "HSRend=1" \
                                  "Link=1-4" \
                                  "LinkAuth=1" \
                                  "Microdesc=1" \
                                  "Relay=1-2";


#define RECOMMENDED_CLIENT_PROTOCOLS = "Cons=1-2" \
                                     "Desc=1-2" \
                                     "DirCache=1" \
                                     "HSDir=1" \
                                     "HSIntro=3" \
                                     "HSRend=1" \
                                     "Link=4" \
                                     "LinkAuth=1" \
                                     "Microdesc=1-2" \
                                     "Relay=2";

#define REQUIRED_CLIENT_PROTOCOLS = "Cons=1-2" \
                                  "Desc=1-2" \
                                  "DirCache=1" \
                                  "HSDir=1" \
                                  "HSIntro=3" \
                                  "HSRend=1 \
                                  "Link=4" \
                                  "LinkAuth=1" \
                                  "Microdesc=1-2" \
                                  "Relay=2";

#define REQUIRED_RELAY_PROTOCOLS = "Cons=1" \
                                 "Desc=1" \
                                 "DirCache=1" \
                                 "HSDir=1" \
                                 "HSIntro=3" \
                                 "HSRend=1" \
                                 "Link=3-4" \
                                 "LinkAuth=1" \
                                 "Microdesc=1" \
                                 "Relay=1-2";

#endif
