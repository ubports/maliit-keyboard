CONFIG += ordered
TEMPLATE = subdirs
SUBDIRS = \
    westernsupport \
    ar \
    cs \
    da \
    de \
    en \
    es \
    fi \
    fr \
    he \
    hu \
    it \
    nl \
    pl \
    pt \
    ru \
    sv \
    pinyin \

QMAKE_EXTRA_TARGETS += check
check.target = check
check.CONFIG = recursive