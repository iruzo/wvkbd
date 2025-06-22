static const int seccondaryBackground[4] = {52, 35, 38, transparency}; // crust
static const int primaryBackground[4] = {70, 52, 48, transparency}; // base
static const int innerLine[4] = {230, 158, 202, transparency}; // mauve

struct clr_scheme scheme = {
  /* colors */
  .bg = {.bgra = {innerLine[0], innerLine[1], innerLine[2], innerLine[3]}},
  .fg = {.bgra = {primaryBackground[0], primaryBackground[1], primaryBackground[2], primaryBackground[3]}},
  .high = {.bgra = {innerLine[0], innerLine[1], innerLine[2], innerLine[3]}},
  .swipe = {.bgra = {innerLine[0], innerLine[1], innerLine[2], innerLine[3]}},
  .text = {.color = UINT32_MAX},
};
struct clr_scheme scheme1 = {
  /* colors */
  .bg = {.bgra = {seccondaryBackground[0], seccondaryBackground[1], seccondaryBackground[2], seccondaryBackground[3]}},
  .fg = {.bgra = {seccondaryBackground[0], seccondaryBackground[1], seccondaryBackground[2], seccondaryBackground[3]}},
  .high = {.bgra = {seccondaryBackground[0], seccondaryBackground[1], seccondaryBackground[2], seccondaryBackground[3]}},
  .swipe = {.bgra = {seccondaryBackground[0], seccondaryBackground[1], seccondaryBackground[2], seccondaryBackground[3]}},
  .text = {.color = UINT32_MAX},
};
