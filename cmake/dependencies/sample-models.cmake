# This file is part of KDGpu Examples.
#
# SPDX-FileCopyrightText: 2023 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
#
# SPDX-License-Identifier: MIT
#
# Contact KDAB at <info@kdab.com> for commercial licensing options.
#
FetchContent_Declare(
    sample-models
    GIT_REPOSITORY git@github.com:KDAB/kdgpu-examples-data.git
    GIT_TAG master
)
FetchContent_MakeAvailable(sample-models)