### Build Configuration ###

# Default variables
GAME_VERSION  ?= RUBY
GAME_REVISION ?= 0
GAME_LANGUAGE ?= ENGLISH
DEBUG         ?= 0
COMPARE  ?= 1

# For gbafix
MAKER_CODE  := 01

# Version
ifeq ($(GAME_VERSION), RUBY)
  BUILD_NAME := ruby
  #TITLE      := POKEMON RUBY
  TITLE      := POKERUBYWARP
  GAME_CODE  := AXV
else
ifeq ($(GAME_VERSION), SAPPHIRE)
  BUILD_NAME := sapphire
  #TITLE      := POKEMON SAPP
  TITLE      := POKESAPHWARP
  GAME_CODE  := AXP
else
  $(error unknown version $(GAME_VERSION))
endif
endif

# Revision
ifeq ($(GAME_REVISION), 0)
  BUILD_NAME := $(BUILD_NAME)
else
ifeq ($(GAME_REVISION), 1)
  BUILD_NAME := $(BUILD_NAME)_rev1
else
ifeq ($(GAME_REVISION), 2)
  BUILD_NAME := $(BUILD_NAME)_rev2
else
  $(error unknown revision $(GAME_REVISION))
endif
endif
endif

# Language
ifeq ($(GAME_LANGUAGE), ENGLISH)
  BUILD_NAME := $(BUILD_NAME)
  GAME_CODE  := $(GAME_CODE)E
else
ifeq ($(GAME_LANGUAGE), GERMAN)
  BUILD_NAME := $(BUILD_NAME)_de
  GAME_CODE  := $(GAME_CODE)D
else
  $(error unknown language $(GAME_LANGUAGE))
endif
endif

# Debug
ifeq ($(DEBUG), 1)
  BUILD_NAME := $(BUILD_NAME)_debug
endif

