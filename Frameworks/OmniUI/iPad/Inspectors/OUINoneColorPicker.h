// Copyright 2010-2015 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniUI/OUIColorPicker.h>
#import <OmniUI/OUIColorValue.h>

@interface OUINoneColorPicker : OUIColorPicker <OUIColorValue>
{
@private
    OAColor *_selectedColor;
}

@end
