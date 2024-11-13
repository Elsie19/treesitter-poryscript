vim.filetype.add({ extension = { pory = "pory" } })

vim.api.nvim_create_autocmd("FileType", {
    pattern = "pory",
    callback = function(event) vim.bo[event.buf].commentstring = "# %s" end,
})

require("nvim-treesitter.parsers").get_parser_configs().pory = {
    install_info = {
        url = "https://github.com/Elsie19/treesitter-poryscript",
        files = { "src/parser.c" },
        branch = "master",
    },
    filetype = "pory",
}
