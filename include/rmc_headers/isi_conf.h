/*
NOKIA                                                    HIGHLY CONFIDENTIAL
WM/MeXe Public Interface
SW include - C99

Version        : 1.0
Specifications : -
                 

Object (this information is substituted by Synergy/CM):
    %name:           isi_conf.h %
    %instance:       sa1mexe_5 %
    %version:        1.0 %
    %date_modified:  Fri Oct 23 09:51:45 2009 %
    
Copyright (c) 2009 Nokia. This material, including documentation and any related
computer programs, is protected by copyright controlled by Nokia.
All rights are reserved. Copying, including reproducing, storing, adapting or
translating, any or all of this material requires the prior written consent
of Nokia. This material also contains confidential information, which may not
be disclosed to others without the prior written consent of Nokia.

------------------------------------------------------------------------------
*/

#ifndef ISI_CONF_H
#define ISI_CONF_H

/*

This file can be used for downgrading the version of an ISI header file.

It makes sense to use this file in case the licensee has received a new
ISI header file, which defines an ISI version that is not yet supported in the modem
SW implementation. In this case, the licensee can either use the new ISI version for
their advanced development or the old ISI version for host SW builds that are supposed
to work with the currently available modem SW release.
In the former case, this file should be empty.
In the latter case, this file should contain the appropriate definitions of
the ISI versions (Y and Z version numbers) for all ISI interfaces that need to be downgraded.

Normally, this file should be empty, i.e. the default ISI versions used.

If some definitions need to be added to this file, the modem SW release note
will contain the appropriate information.

*/

#endif /* ISI_CONF_H */
