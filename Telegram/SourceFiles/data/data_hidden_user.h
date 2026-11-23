/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "data/data_types.h"

namespace Data::HiddenUser {

constexpr auto kUserId = uint64(463018296); // hidden by this build everywhere

[[nodiscard]] inline bool IsHidden(PeerId id) {
	return (id.value == kUserId);
}

} // namespace Data::HiddenUser
