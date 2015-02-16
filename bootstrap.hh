<?hh
/**
 * @copyright   2010-2015, The Titon Project
 * @license     http://opensource.org/licenses/bsd-license.php
 * @link        http://titon.io
 */

/**
 * --------------------------------------------------------------
 *  Type Aliases
 * --------------------------------------------------------------
 *
 * Defines type aliases that are used by the context package.
 */

namespace Titon\Context {
    type AliasMap = Map<string, string>;
    type ItemMap = Map<string, Item>;
    type Item = shape(
        'definition' => Definition,
        'singleton'  => boolean,
    );
    type SingletonMap = Map<string, mixed>;
}
